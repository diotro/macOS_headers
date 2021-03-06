//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPContactsImporter : NSObject
{
}

+ (id)defaultInstance;
- (id)_loadContactIdentifiersAlreadyImportedInPastDay;
- (void)_removeStashedImportedContacts;
- (void)_stashImportedContactsIdentifiers:(id)arg1;
- (id)_entitiesForScoredContact:(id)arg1;
- (void)_registerForNotifications;
- (BOOL)importScoredContact:(id)arg1 contactsIdentifier:(id)arg2 error:(id *)arg3;
- (void)importContactsDataWithShouldContinueBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

