//
#ifndef TFNEmptyStateConfiguration_h
#define TFNEmptyStateConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNEmptyStateButtonConfiguration.h"
#include "TFNEmptyStateImageProvider.h"
#include "TFNEmptyStateSubtitleConfiguration.h"

@class NSArray, NSObject, NSString;

@interface TFNEmptyStateConfiguration : NSObject <NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 onAsynchronousHeightChange;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) TFNEmptyStateSubtitleConfiguration *subtitleConfiguration;
@property (nonatomic, retain) TFNEmptyStateImageProvider *imageProvider;
@property (nonatomic, retain) TFNEmptyStateButtonConfiguration *buttonConfiguration;
@property (nonatomic, copy) NSArray *buttonConfigurations;
@property (nonatomic, copy) NSString *footerText;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (id)initWithTitle:(id)title;
- (id)init;

@end

#endif /* TFNEmptyStateConfiguration_h */
