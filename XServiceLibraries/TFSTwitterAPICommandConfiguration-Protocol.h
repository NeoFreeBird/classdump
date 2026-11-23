//
#ifndef TFSTwitterAPICommandConfiguration_Protocol_h
#define TFSTwitterAPICommandConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterAPICommandConfiguration <NSObject>

@required

@property (readonly, nonatomic) long long scribeAPISampleSize;
@property (readonly, nonatomic) long long scribeAPIErrorSampleSize;

@optional

@end

#endif /* TFSTwitterAPICommandConfiguration_Protocol_h */
