//
#ifndef _TtC4Grok26GrokVoiceSettingsViewModel_h
#define _TtC4Grok26GrokVoiceSettingsViewModel_h
@import Foundation;

#include "AVRoutePickerViewDelegate-Protocol.h"

@class NSObject, _$s7Combine9PublishedVMn Swift.Bool, _$sSo17AVRoutePickerViewC;

@interface Grok.GrokVoiceSettingsViewModel : NSObject <AVRoutePickerViewDelegate> { // (Swift)
    /* instance variables */
    __C.AVRoutePickerView routePickerView;
    nominal type descriptor for Combine.Published Swift.Bool _externalOutputDevice;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC4Grok26GrokVoiceSettingsViewModel_h */
