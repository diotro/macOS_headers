//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PPPortraitConfiguration : NSObject
{
    NSMutableDictionary *_parameters;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)nonReaderTextWeight;
- (double)halfValuePosition;
- (id)portraitVariantName;
- (double)scalingFactorForMappingId:(id)arg1;
- (id)resourceForMappingId:(id)arg1;
- (double)topicsSigmoidPeakValue;
- (double)topicsScalingFactor;
- (double)topicsSigmoidWidth;
- (id)init;

@end

