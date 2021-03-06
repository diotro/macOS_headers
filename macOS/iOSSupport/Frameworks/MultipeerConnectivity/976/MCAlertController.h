//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface MCAlertController : UIAlertController
{
    CDUnknownBlockType _viewWillAppearHandler;
    CDUnknownBlockType _viewDidDisappearHandler;
    UIWindow *_alertWindow;
}

@property(retain, nonatomic) UIWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
@property(copy, nonatomic) CDUnknownBlockType viewDidDisappearHandler; // @synthesize viewDidDisappearHandler=_viewDidDisappearHandler;
@property(copy, nonatomic) CDUnknownBlockType viewWillAppearHandler; // @synthesize viewWillAppearHandler=_viewWillAppearHandler;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dismiss;
- (void)show;

@end

