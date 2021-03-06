//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl
{
    UITableViewCell *_cell;
    UIImageView *_imageView;
    UIImageView *_shadowView;
    double _focalY;
    double _focalHeight;
    unsigned int _style:2;
    unsigned int _rotated:1;
    unsigned int _rotating:1;
    unsigned int _reserved:27;
}

- (void).cxx_destruct;
- (void)_createImageViewIfNeccessary;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_multiselectColorChanged;
@property(readonly, nonatomic) BOOL wantsImageShadow;
@property(readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
- (void)_toggleRotateAnimationDidStop;
- (BOOL)isRotating;
@property(nonatomic, getter=isRotated) BOOL rotated;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)_shadowImage;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)defaultSize;
- (id)_renderedImage;
- (id)_currentImage;
- (void)_updateImageView;
- (id)_multiSelectSelectedImage;
- (id)_multiSelectNotSelectedImage;
- (id)_insertImage;
- (id)_deleteImage;
- (void)_toggleRotate;
- (id)_imageView;

@end

