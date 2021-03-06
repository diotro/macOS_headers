//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TSUBasicProgress, TSUProgress;
@protocol OS_dispatch_queue;

@interface TSAFontDownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSSet *_fontNames;
    NSMutableSet *_matchedFontNames;
    BOOL _didStartMatch;
    BOOL _didFinish;
    BOOL _didCancel;
    long long _totalBytesExpectedToBeDownloaded;
    TSUBasicProgress *_progress;
    CDUnknownBlockType _willBeginDownloadingHandler;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType willBeginDownloadingHandler; // @synthesize willBeginDownloadingHandler=_willBeginDownloadingHandler;
@property(readonly, nonatomic) TSUProgress *progress; // @synthesize progress=_progress;
- (void)cancel;
- (void)completeWithHandler:(CDUnknownBlockType)arg1;
@property(readonly) long long totalBytesExpectedToBeDownloaded;
- (BOOL)_doesFontMatchAttributes:(id)arg1;
- (id)_stateQueue_checkMatchesWithDidComplete:(BOOL)arg1;
- (void)_finishForCancel:(BOOL)arg1 didComplete:(BOOL)arg2;
- (void)_addMatches:(id)arg1;
- (id)_stateQueue_error;
- (BOOL)_stateQueue_success;
- (void)_stateQueue_match;
- (void)matchWithWillBeginDownloadingHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFontNames:(id)arg1;

@end

