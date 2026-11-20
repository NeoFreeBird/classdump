//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP8TFSModel15TFSModelBuilder__Protocol_h
#define _TtP8TFSModel15TFSModelBuilder__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSModel.TFSModelBuilder <NSObject>

@required

/* required instance methods */
- (id)modelObjectWithJSONData:(id)jsondata headerFields:(id)fields error:(id *)error;

@optional

/* optional instance methods */
- (id)modelObjectWithJSONObject:(id)jsonobject headerFields:(id)fields error:(id *)error;

@end

#endif /* _TtP8TFSModel15TFSModelBuilder__Protocol_h */
