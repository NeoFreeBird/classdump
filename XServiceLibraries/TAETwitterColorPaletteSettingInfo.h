//
#ifndef TAETwitterColorPaletteSettingInfo_h
#define TAETwitterColorPaletteSettingInfo_h
@import Foundation;

#include "TAEColorPalette-Protocol.h"

@class NSObject, NSString;

@interface TAETwitterColorPaletteSettingInfo : NSObject {
    /* instance variables */
    id /* block */ _paletteFactory;
    id <TAEColorPalette> _palette;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) _Bool isDark;
@property (readonly, nonatomic) id <TAEColorPalette> colorPalette;
@property (nonatomic) long long primaryColorOption;

/* instance methods */
- (id)initWithName:(id)name isDark:(_Bool)dark paletteFactory:(id /* block */)factory;

@end

#endif /* TAETwitterColorPaletteSettingInfo_h */
