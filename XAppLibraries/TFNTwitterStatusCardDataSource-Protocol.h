//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterStatusCardDataSource_Protocol_h
#define TFNTwitterStatusCardDataSource_Protocol_h
@import Foundation;

#include "TFCCardDataSource-Protocol.h"
#include "TFCCardDataSourceObject-Protocol.h"
#include "TFNTwitterCanonicalTimelineStatus-Protocol.h"

@protocol TFNTwitterStatusCardDataSource <TFCCardDataSource>

@required

@property (readonly, nonatomic) id <TFNTwitterCanonicalTimelineStatus, TFCCardDataSourceObject> sourceObject;

@optional

@end

#endif /* TFNTwitterStatusCardDataSource_Protocol_h */
