//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSKChangeSourceObserver-Protocol.h"
#import "TSWPStorageObserver-Protocol.h"
#import "TSWPTOCController-Protocol.h"

@class NSString, TPDocumentRoot, TSWPStorage;

@interface TPTOCController : NSObject <TSKChangeSourceObserver, TSWPStorageObserver, TSWPTOCController>
{
    BOOL _enabled;
    TPDocumentRoot *_documentRoot;
    TSWPStorage *_bodyStorage;
    unsigned long long _tocAttachmentCount;
}

@property(nonatomic) unsigned long long tocAttachmentCount; // @synthesize tocAttachmentCount=_tocAttachmentCount;
@property(nonatomic) TSWPStorage *bodyStorage; // @synthesize bodyStorage=_bodyStorage;
@property(nonatomic) TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void)scrollToParagraphAtIndex:(unsigned long long)arg1;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)p_pageDidLayout:(id)arg1;
- (void)p_tocWasRemoved:(id)arg1;
- (void)p_tocWillBeAdded:(id)arg1;
- (void)p_buildTOCData;
- (int)p_pageNumberFormatForSectionOnPageIndex:(unsigned long long)arg1;
@property BOOL enabled; // @synthesize enabled=_enabled;
- (void)refreshTOCData:(id)arg1;
- (void)teardown;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

