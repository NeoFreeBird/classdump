//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAmplifyVMAPPlaylistCTA_h
#define TAVAmplifyVMAPPlaylistCTA_h
@import Foundation;

#include "TAVAmplifyVMAPPlaylistCTAItem.h"

@class NSObject, NSURL;

@interface TAVAmplifyVMAPPlaylistCTA : NSObject

@property (retain, nonatomic) TAVAmplifyVMAPPlaylistCTAItem *iPadAppStoreCTA;
@property (retain, nonatomic) TAVAmplifyVMAPPlaylistCTAItem *iPhoneAppStoreCTA;
@property (retain, nonatomic) NSURL *watchNowURL;
@property (retain, nonatomic) NSURL *openURL;

/* instance methods */

@end

#endif /* TAVAmplifyVMAPPlaylistCTA_h */
