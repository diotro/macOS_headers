//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "NSMenuDelegate.h"

@class NSMenu, NSMenuItem, NSMutableDictionary, NSString, NSTrackingArea;

__attribute__((visibility("hidden")))
@interface LPLinkTextField : NSTextField <NSMenuDelegate>
{
    NSTrackingArea *_trackingArea;
    NSMutableDictionary *_standardAttributes;
    NSMutableDictionary *_disabledAttributes;
    NSMenu *_menu;
    NSMenuItem *_copyLinkMenuItem;
    BOOL _underlinesText;
    NSString *_linkURLString;
}

+ (id)linkTextFieldWithTitle:(id)arg1 alignment:(unsigned long long)arg2 linkURLString:(id)arg3;
@property(copy, nonatomic) NSString *linkURLString; // @synthesize linkURLString=_linkURLString;
- (id)menu;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuAction:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)setFont:(id)arg1;
- (void)setUnderlinesText:(BOOL)arg1;
- (void)setDisabledTextColor:(id)arg1;
- (void)setEnabledTextColor:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)resetCursorRects;
- (void)setEnabled:(BOOL)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

