//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmallDialogController.h"

@class CLgView, NSWindow;

@interface SmallSheetController : SmallDialogController
{
    NSWindow *_parentWindow;
    CLgView *_parentView;
}

+ (void)showAsSheet:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)document;
- (id)parentView;
- (void)didEndSheet:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)closeSheet:(id)arg1;
- (void)beginSheet:(id)arg1;
- (void)setup:(id)arg1;

@end

