//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WindowControllerInterface-Protocol.h"

@class NSScreen, NSString, NSWindowController, PTYSession;
@protocol iTermWindowController;

@interface FakeWindow : NSObject <WindowControllerInterface>
{
    PTYSession *session;
    BOOL isFullScreen;
    BOOL isLionFullScreen;
    BOOL isMiniaturized;
    struct CGRect frame;
    NSScreen *screen;
    NSWindowController<iTermWindowController> *realWindow;
    BOOL hasPendingBlurChange;
    double pendingBlurRadius;
    BOOL pendingBlur;
    BOOL hasPendingClose;
    BOOL hasPendingFitWindowToTab;
    BOOL hasPendingSizeChange;
    int pendingW;
    int pendingH;
    BOOL hasPendingSetWindowTitle;
    BOOL scrollbarShouldBeVisible;
}

- (BOOL)movesWhenDraggedOntoSelf;
- (void)updateTabColors;
- (long long)scrollerStyle;
- (BOOL)scrollbarShouldBeVisible;
- (id)windowScreen;
- (struct CGRect)windowFrame;
- (BOOL)windowIsMiniaturized;
- (void)windowOrderBack:(id)arg1;
- (void)windowOrderFront:(id)arg1;
- (void)windowDeminiaturize:(id)arg1;
- (void)windowPerformMiniaturize:(id)arg1;
- (void)windowSetFrameTopLeftPoint:(struct CGPoint)arg1;
- (id)currentTab;
- (void)setWindowTitle;
- (id)tabView;
- (void)fitWindowToTab:(id)arg1;
- (void)disableBlur;
- (void)enableBlur:(double)arg1;
- (void)previousTab:(id)arg1;
- (void)nextTab:(id)arg1;
- (void)closeTab:(id)arg1;
- (void)closeSession:(id)arg1;
- (id)currentSession;
- (BOOL)anyFullScreen;
- (BOOL)fullScreen;
- (void)sessionInitiatedResize:(id)arg1 width:(int)arg2 height:(int)arg3;
- (void)rejoin:(id)arg1;
- (void)dealloc;
- (id)initFromRealWindow:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

