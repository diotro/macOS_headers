//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DAVResponseBodyReader.h"

@class NSArray, NSMutableData;

@interface ISS_DAVMultiStatusBodyReader : NSObject <DAVResponseBodyReader>
{
    Class responseClass;
    NSMutableData *readData;
    NSArray *responses;
    NSArray *errors;
}

+ (id)propFindBodyReader;
+ (id)multiStatusBodyReaderWithResponseClass:(Class)arg1;
+ (id)multiStatusBodyReader;
- (void)request:(id)arg1 readResponseBody:(id)arg2;
- (id)data;
- (void)_calculateResponsesWithHTTPStatusCode:(int)arg1;
- (BOOL)request:(id)arg1 acceptResponseWithHTTPStatusCode:(int)arg2;
- (id)errors;
- (id)responses;
- (void)finalize;
- (void)dealloc;
- (void)reset;
- (id)initForPropFind;
- (id)initWithResponseClass:(Class)arg1;
- (id)init;

@end

