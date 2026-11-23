//
#ifndef _TtP14TFSTwitterCore28TFSLegacyModelSupportResults__Protocol_h
#define _TtP14TFSTwitterCore28TFSLegacyModelSupportResults__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterCore.TFSLegacyModelSupportResults <NSObject>

@required

/* required instance methods */
- (id)statusForID:(id)id;
- (id)userForID:(id)id;
- (id)cardForID:(id)id;
- (id)communityForID:(id)id;
- (id)unifiedCardForID:(id)id;
- (void)removeObservable;

@optional

@end

#endif /* _TtP14TFSTwitterCore28TFSLegacyModelSupportResults__Protocol_h */
