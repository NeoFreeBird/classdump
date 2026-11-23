//
#ifndef T1StatusViewScribableItem_h
#define T1StatusViewScribableItem_h
@import Foundation;

#include "TTACoreBasicStatusView-Protocol.h"
#include "_TtP14TFSTwitterCore23TFSTwitterScribableItem_-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface T1StatusViewScribableItem : NSObject <TFSTwitterCore.TFSTwitterScribableItem>

@property (readonly, weak, nonatomic) id <TTACoreBasicStatusView> statusView;
@property (readonly, copy, nonatomic) NSString *scribeItemImpressionID;
@property (readonly, copy, nonatomic) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (readonly, copy, nonatomic) NSString *scribeItemFirstImpressionID;
@property (readonly, copy, nonatomic) NSString *scribeItemContentID;
@property (readonly, copy, nonatomic) NSString *scribeComponent;
@property (readonly, copy, nonatomic) NSString *scribeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStatusView:(id)view;
- (id)init;

@end

#endif /* T1StatusViewScribableItem_h */
