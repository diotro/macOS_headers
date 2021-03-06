//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentAnchor-Protocol.h>

@class NSString;

@interface SXComponentAnchor : NSObject <SXComponentAnchor>
{
    NSString *_targetComponentIdentifier;
    long long _targetAnchorPosition;
    long long _originAnchorPosition;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long originAnchorPosition; // @synthesize originAnchorPosition=_originAnchorPosition;
@property(nonatomic) long long targetAnchorPosition; // @synthesize targetAnchorPosition=_targetAnchorPosition;
@property(readonly, nonatomic) NSString *targetComponentIdentifier; // @synthesize targetComponentIdentifier=_targetComponentIdentifier;
@property(readonly, copy) NSString *description;
- (id)initWithTargetComponentIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

