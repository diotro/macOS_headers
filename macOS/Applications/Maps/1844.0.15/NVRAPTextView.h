//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface NVRAPTextView : NSTextView
{
    NSString *_placeHolderText;
    NSTextField *_placeHolderLabel;
}

@property(retain, nonatomic) NSTextField *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(copy, nonatomic) NSString *placeHolderText; // @synthesize placeHolderText=_placeHolderText;
- (void).cxx_destruct;
- (void)updateVisibilityPlaceHolder;
- (void)keyDown:(id)arg1;

@end

