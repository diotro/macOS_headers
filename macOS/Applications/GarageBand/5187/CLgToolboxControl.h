//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLgSegmentedControl.h"

#import "NSMenuDelegate.h"

@class NSString;

@interface CLgToolboxControl : CLgSegmentedControl <NSMenuDelegate>
{
    char selectedToolID[4];
    SEL selectionActionSelector;
    id selectionActionTarget;
    int selectionActionTag;
    int lastSelectedPartIndex;
    BOOL lastSelectedElemID;
}

- (void)setValue:(id)arg1 forIndex:(int)arg2;
- (void)setValues:(id)arg1;
- (id)valueForIndex:(int)arg1;
- (id)values;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)willBeShown2:(id)arg1;
- (void)willBeClosed2:(id)arg1;
- (BOOL)rebuildControl:(id)arg1;
- (long long)tag;
- (BOOL)lastSelectedElemID;
- (int)lastSelectedPartIndex;
- (void)setSelectionAction:(SEL)arg1 actionTarget:(id)arg2 actionTag:(int)arg3;
- (void)toolboxMenuAction3:(id)arg1;
- (void)toolboxMenuAction2:(id)arg1;
- (void)toolboxMenuAction1:(id)arg1;
- (void)toolboxMenuAction0:(id)arg1;
- (void)toolboxMenuAction:(id)arg1 withIndex:(int)arg2;
- (void)dealloc;
- (id)initToolbarControl:(struct CGRect)arg1 partArray:(id)arg2 themeVariant:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

