//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PHFace;

@interface VCPCallerIdentificationResult : NSObject
{
    float _confidence;
    PHFace *_face;
    NSString *_callerIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) NSString *callerIdentifier; // @synthesize callerIdentifier=_callerIdentifier;
@property(readonly, nonatomic) PHFace *face; // @synthesize face=_face;
- (id)initWithCallerIdentifier:(id)arg1 face:(id)arg2 andConfidence:(float)arg3;

@end

