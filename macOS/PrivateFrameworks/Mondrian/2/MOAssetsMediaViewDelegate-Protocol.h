//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MOAssetsMediaView, MOPhotosSupplementaryFooterInfo, NSAttributedString, NSIndexPath;

@protocol MOAssetsMediaViewDelegate <NSObject>

@optional
- (struct CGSize)assetsMediaView:(MOAssetsMediaView *)arg1 recommendedCellSizeForThumbnailSize:(struct CGSize)arg2 inMaxSize:(struct CGSize)arg3;
- (double)mainFooterHeightForAssetsMediaView:(MOAssetsMediaView *)arg1 width:(double)arg2 scale:(double)arg3;
- (MOPhotosSupplementaryFooterInfo *)mainFooterInfoForAssetsMediaView:(MOAssetsMediaView *)arg1;
- (NSAttributedString *)mainFooterTitleForAssetsMediaView:(MOAssetsMediaView *)arg1;
- (BOOL)shouldShowMainFooterForAssetsMediaView:(MOAssetsMediaView *)arg1 includingWhenInBounds:(char *)arg2;
- (double)mainHeaderHeightForAssetsMediaView:(MOAssetsMediaView *)arg1 width:(double)arg2 scale:(double)arg3;
- (BOOL)shouldShowMainHeaderForAssetsMediaView:(MOAssetsMediaView *)arg1;
- (BOOL)assetsMediaView:(MOAssetsMediaView *)arg1 shouldShowFooterAtIndexPath:(NSIndexPath *)arg2;
- (BOOL)assetsMediaView:(MOAssetsMediaView *)arg1 shouldShowHeaderAtIndexPath:(NSIndexPath *)arg2;
@end

