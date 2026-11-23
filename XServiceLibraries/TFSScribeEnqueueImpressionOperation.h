//
#ifndef TFSScribeEnqueueImpressionOperation_h
#define TFSScribeEnqueueImpressionOperation_h
@import Foundation;

#include "TFSScribeOperation.h"

@class NSData, NSString;

@interface TFSScribeEnqueueImpressionOperation : TFSScribeOperation

@property (readonly, copy, nonatomic) NSData *contentData;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *group;

/* instance methods */
- (id)initWithApplicationLink:(id)link databaseProvider:(id)provider impression:(id)impression eventName:(id)name query:(id)query group:(id)group;
- (void)main;

@end

#endif /* TFSScribeEnqueueImpressionOperation_h */
