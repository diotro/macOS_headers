//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGDefinition2Operation : DGOperation
{
    NSNumber *_inputIntensity;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (BOOL)isMigratable;

@end

