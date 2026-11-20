//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MinimalTweetScribableItem_h
#define T1MinimalTweetScribableItem_h
@import Foundation;

#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSNumber, NSObject, NSString;

@interface T1MinimalTweetScribableItem : NSObject <TFSTwitterCore.TFSTwitterScribableItem> {
    /* instance variables */
    id /* block */ _statusIDProvider;
    NSNumber *_authorID;
    long long _itemType;
}

@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly, copy, nonatomic) NSString *scribeItemDebugDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)filteredItemParameters:(id)parameters;
+ (id)filteredItemParametersExcludingItemType:(id)type;

/* instance methods */
- (id)init;
- (id)initWithStatusID:(id)id authorID:(id)id;
- (id)initWithStatusID:(id)id authorID:(id)id itemType:(long long)type;
- (id)initWithStatusIDProvider:(id /* block */)idprovider authorID:(id)id itemType:(long long)type;

@end

#endif /* T1MinimalTweetScribableItem_h */
