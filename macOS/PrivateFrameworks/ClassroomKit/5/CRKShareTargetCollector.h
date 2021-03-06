//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface CRKShareTargetCollector : NSObject
{
    id <CRKShareTargetCollectorDelegate> _delegate;
    NSSet *_studentTargets;
    NSSet *_instructorTargets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *instructorTargets; // @synthesize instructorTargets=_instructorTargets;
@property(copy, nonatomic) NSSet *studentTargets; // @synthesize studentTargets=_studentTargets;
@property(nonatomic) __weak id <CRKShareTargetCollectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didRemoveTargets:(id)arg1;
- (void)didFindTargets:(id)arg1;
- (void)diffNewTargets:(id)arg1 againstOldTargets:(id)arg2;
- (void)instructorTargetsDidChange:(id)arg1;
- (void)studentTargetsDidChange:(id)arg1;
- (id)init;

@end

