//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "_SFPBContactImage.h"

@class NSArray, NSData, NSString;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding>
{
    BOOL _threeDTouchEnabled;
    NSArray *_contactIdentifiers;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactIdentifiersCount;
- (void)addContactIdentifiers:(id)arg1;
- (void)clearContactIdentifiers;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

