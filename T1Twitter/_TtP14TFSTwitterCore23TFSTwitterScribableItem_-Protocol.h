//
#ifndef _TtP14TFSTwitterCore23TFSTwitterScribableItem__Protocol_h
#define _TtP14TFSTwitterCore23TFSTwitterScribableItem__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol TFSTwitterCore.TFSTwitterScribableItem <NSObject>

@required

@property (nonatomic, readonly) NSString *scribeItemImpressionID;
@property (nonatomic, readonly) NSDictionary *scribeItem;
@property (nonatomic) unsigned long long isDuplicateContentIDInstance;
@property (nonatomic) unsigned long long isCurrentlyFirstImpression;
@property (nonatomic, readonly) NSString *scribeItemFirstImpressionID;
@property (nonatomic, readonly) NSString *scribeItemContentID;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;

@optional

@end

#endif /* _TtP14TFSTwitterCore23TFSTwitterScribableItem__Protocol_h */
