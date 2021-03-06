//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSUTraceableResourceToken-Protocol.h"

@class NSArray, NSMutableArray, NSString;

@interface TSUTraceableResourceToken : NSObject <TSUTraceableResourceToken>
{
    // Error parsing type: Ai, name: _timeoutPauseCount
    NSArray *_acquireCallStack;
    NSArray *_copiedAcquireCallStack;
    double _acquireTime;
    NSArray *_relinquishCallStack;
    NSArray *_copiedRelinquishCallStack;
    double _relinquishTime;
    NSMutableArray *_breadcrumbs;
    NSString *_intent;
    double _timeout;
    NSObject *_context;
}

+ (id)callStackDescriptionWithAction:(id)arg1 callStackSymbols:(id)arg2 index:(id)arg3;
+ (id)p_formattedDateStringFromTimeInterval:(double)arg1;
@property(readonly, nonatomic) double relinquishTime; // @synthesize relinquishTime=_relinquishTime;
@property(readonly, nonatomic) double acquireTime; // @synthesize acquireTime=_acquireTime;
@property(readonly, nonatomic) NSObject *context; // @synthesize context=_context;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSString *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)breadcrumbsDescriptionWithIndex:(id)arg1;
- (id)acquireCallStackDescriptionWithIndex:(id)arg1;
- (id)metadataDescriptionWithIndex:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)setRelinquishCallStackIfNeeded:(id)arg1 relinquishTime:(double)arg2;
@property(readonly, nonatomic) NSArray *relinquishCallStack;
@property(readonly, nonatomic) NSArray *acquireCallStack;
- (void)addBreadcrumb:(id)arg1;
- (void)resumeTimeout;
- (void)pauseTimeout;
@property(readonly, nonatomic) BOOL isTimeoutPaused;
- (void)dealloc;
- (id)initWithIntent:(id)arg1 timeout:(double)arg2 context:(id)arg3 acquireCallStack:(id)arg4 acquireTime:(double)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

