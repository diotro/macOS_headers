//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSSecureCoding.h"
#import "SISchemaViewContainer.h"

@class NSData, NSString;

@interface SISchemaViewContainer : PBCodable <SISchemaViewContainer, NSSecureCoding>
{
    NSString *_viewID;
    NSString *_snippetClass;
    NSString *_dialogIdentifier;
    NSString *_dialogPhase;
}

@property(copy, nonatomic) NSString *dialogPhase; // @synthesize dialogPhase=_dialogPhase;
@property(copy, nonatomic) NSString *dialogIdentifier; // @synthesize dialogIdentifier=_dialogIdentifier;
@property(copy, nonatomic) NSString *snippetClass; // @synthesize snippetClass=_snippetClass;
@property(copy, nonatomic) NSString *viewID; // @synthesize viewID=_viewID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

