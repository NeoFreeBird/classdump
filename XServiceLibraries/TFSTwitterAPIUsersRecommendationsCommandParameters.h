//
#ifndef TFSTwitterAPIUsersRecommendationsCommandParameters_h
#define TFSTwitterAPIUsersRecommendationsCommandParameters_h
@import Foundation;

#include "TFSTwitterAPICommandContext-Protocol.h"
#include "_TtP8TFSModel15TFSModelBuilder_-Protocol.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface TFSTwitterAPIUsersRecommendationsCommandParameters : NSObject

@property (retain, nonatomic) id <TFSTwitterAPICommandContext> context;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) unsigned long long source;
@property (copy, nonatomic) NSString *screenName;
@property (retain, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *displayLocation;
@property (copy, nonatomic) NSString *referralSource;
@property (retain, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSArray *excluded;
@property (retain, nonatomic) NSNumber *profileID;
@property (copy, nonatomic) NSArray *itsTopics;
@property (copy, nonatomic) NSArray *customInterests;
@property (retain, nonatomic) id <TFSModel.TFSModelBuilder> responseModelBuilder;
@property (copy, nonatomic) id /* block */ responseProcessorBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) _Bool allowPromotedContent;

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id source:(unsigned long long)source;

@end

#endif /* TFSTwitterAPIUsersRecommendationsCommandParameters_h */
