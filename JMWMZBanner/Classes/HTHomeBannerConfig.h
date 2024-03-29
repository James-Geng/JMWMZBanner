//
//  HTHomeBannerConfig.h
//  Cartoon
//
//  Created by James on 2023/4/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WMZBannerParam.h"

NS_ASSUME_NONNULL_BEGIN

@protocol HTHomeBannerDelegate <NSObject>

/// 点击
-(void)ht_homeBannerDidSelect:(NSInteger) index;

/// 滚动结束
-(void)ht_homeBannerScrollEnd:(NSInteger) index;

@end

@protocol HTHomeBannerDataSource <NSObject>

-(UICollectionViewCell *)collectionView:(UICollectionView *) collectionView cellForRow:(NSIndexPath *)indexPath model:(id) model bgImageView:(UIImageView *) bgImageView dataArr:(NSArray *) dataArr;

-(NSArray *)dataSource;

@end

@interface HTHomeBannerConfig : NSObject

@property (weak, nonatomic) id<HTHomeBannerDataSource> dataSource;
@property (weak, nonatomic) id<HTHomeBannerDelegate> delegate;

@property (assign, nonatomic) CGRect frame;

@property (assign, nonatomic) CGSize itemSize;

@property (assign, nonatomic) CGFloat LineSpacing;

@property (assign, nonatomic) UIEdgeInsets sectionInset;

@property (assign, nonatomic) BOOL autoScroll;

-(void)ht_registerCellClassName:(NSString *) andClassName;

-(WMZBannerParam *)ht_getWMZHomeBannerParam;

@end

NS_ASSUME_NONNULL_END
