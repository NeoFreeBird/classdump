//
#ifndef TUCExperimentWebsiteFormatCTASettings_h
#define TUCExperimentWebsiteFormatCTASettings_h
@import Foundation;

#include "TUCButtonData.h"

@class NSObject;

@interface TUCExperimentWebsiteFormatCTASettings : NSObject

@property (readonly, nonatomic) TUCButtonData *buttonData;
@property (readonly, nonatomic) double lingerTime;
@property (readonly, nonatomic) _Bool hideSubtitle;
@property (readonly, nonatomic) _Bool isFullWidth;
@property (readonly, nonatomic) _Bool shouldChangeColorOnLinger;

/* instance methods */
- (id)init;
- (id)initWithButtonData:(id)data lingerTime:(double)time hideSubtitle:(_Bool)subtitle isFullWidth:(_Bool)width shouldChangeColorOnLinger:(_Bool)linger;

@end

#endif /* TUCExperimentWebsiteFormatCTASettings_h */
