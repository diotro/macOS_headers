//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface PKDiscoveryRelevantDateRange : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValidForTime:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

