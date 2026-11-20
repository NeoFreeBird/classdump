//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
@property (nonatomic, readonly) NSString *scribeItemDebugDisplayName;

@optional

@end

#endif /* _TtP14TFSTwitterCore23TFSTwitterScribableItem__Protocol_h */
