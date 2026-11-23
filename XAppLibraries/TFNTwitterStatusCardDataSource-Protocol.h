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
