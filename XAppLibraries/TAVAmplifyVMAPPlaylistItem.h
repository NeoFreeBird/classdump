//
#ifndef TAVAmplifyVMAPPlaylistItem_h
#define TAVAmplifyVMAPPlaylistItem_h
@import Foundation;

#include "TAVAmplifyVMAPPlaylistCTA.h"

@class NSArray, NSObject, NSString, NSURL;

@interface TAVAmplifyVMAPPlaylistItem : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long ownerID;
@property (retain, nonatomic) NSURL *impressionURL;
@property (retain, nonatomic) NSURL *mediaURL;
@property (retain, nonatomic) NSURL *errorURL;
@property (retain, nonatomic) NSArray *videoVariants;
@property (retain, nonatomic) NSArray *trackingEvents;
@property (retain, nonatomic) TAVAmplifyVMAPPlaylistCTA *cta;

/* instance methods */

@end

#endif /* TAVAmplifyVMAPPlaylistItem_h */
