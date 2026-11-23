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
