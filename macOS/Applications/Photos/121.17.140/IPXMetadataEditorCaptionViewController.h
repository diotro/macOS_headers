//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"
#import "NSTextFieldDelegate-Protocol.h"
#import "PFActionNotificationsReceiver-Protocol.h"

@class IPXMetadataInfoViewController, NSBlockOperation, NSString, NSTextField, NSView;

__attribute__((visibility("hidden")))
@interface IPXMetadataEditorCaptionViewController : IPXViewController <PFActionNotificationsReceiver, IPXMetadataEditorViewController, NSTextFieldDelegate>
{
    NSString *_initialCaption;
    BOOL _edited;
    BOOL _readOnly;
    NSTextField *_captionTextField;
    IPXMetadataInfoViewController *_contentController;
    NSBlockOperation *_summarizerPostflightOperation;
}

@property(retain, nonatomic) NSBlockOperation *summarizerPostflightOperation; // @synthesize summarizerPostflightOperation=_summarizerPostflightOperation;
@property(nonatomic) __weak IPXMetadataInfoViewController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) __weak NSTextField *captionTextField; // @synthesize captionTextField=_captionTextField;
- (void).cxx_destruct;
- (void)action:(id)arg1 statusChangedFrom:(int)arg2 to:(int)arg3;
- (void)a_captionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)_updateCaptionWithSelectionSummary:(id)arg1;
- (void)_displayCaptionPlaceholder;
- (void)cancelPendingSelectionChanges;
- (void)_performDeferredWorkForOperation:(id)arg1 selection:(id)arg2;
- (void)didChangeSelection:(id)arg1;
- (void)saveChanges;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly, nonatomic) NSView *initialFirstResponder;
- (void)willBecomeInactive;
- (void)didBecomeActive;
- (void)_setPlaceholderString:(id)arg1;
- (id)_firstCaptionForItems:(id)arg1;
- (CDUnknownBlockType)_propertyReader;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

