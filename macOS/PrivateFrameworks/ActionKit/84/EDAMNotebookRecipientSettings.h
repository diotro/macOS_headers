//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMNotebookRecipientSettings : FATObject
{
    NSNumber *_reminderNotifyEmail;
    NSNumber *_reminderNotifyInApp;
    NSNumber *_inMyList;
    NSString *_stack;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) NSNumber *inMyList; // @synthesize inMyList=_inMyList;
@property(retain, nonatomic) NSNumber *reminderNotifyInApp; // @synthesize reminderNotifyInApp=_reminderNotifyInApp;
@property(retain, nonatomic) NSNumber *reminderNotifyEmail; // @synthesize reminderNotifyEmail=_reminderNotifyEmail;
- (void).cxx_destruct;

@end

