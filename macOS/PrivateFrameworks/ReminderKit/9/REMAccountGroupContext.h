//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class REMAccount;

@interface REMAccountGroupContext : NSObject
{
    REMAccount *_account;
}

- (void).cxx_destruct;
@property(retain, nonatomic) REMAccount *account; // @synthesize account=_account;
- (id)fetchGroupsWithError:(id *)arg1;
- (id)initWithAccount:(id)arg1;

@end

