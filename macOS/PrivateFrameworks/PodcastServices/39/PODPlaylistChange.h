//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PodcastServices/PODContentChange.h>

#import "PODSecureCoding.h"

@class NSString, PODPlaylistChangeEntityData;

@interface PODPlaylistChange : PODContentChange <PODSecureCoding>
{
}

+ (Class)entityDataClass;
+ (id)deleteWithPlaylistSyncID:(long long)arg1;
+ (id)updateWithPlaylistEntityData:(id)arg1;
+ (id)insertWithPlaylistEntityData:(id)arg1;
@property(readonly, nonatomic) PODPlaylistChangeEntityData *entityData;
@property(readonly, nonatomic) long long playlistSyncID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

