//
#ifndef T1EditProfileLocationFormField_h
#define T1EditProfileLocationFormField_h
@import Foundation;

#include "T1EditProfileFormField.h"

@class TFSTwitterPlace;

@interface T1EditProfileLocationFormField : T1EditProfileFormField

@property (retain, nonatomic) TFSTwitterPlace *selectedPlace;

/* instance methods */

@end

#endif /* T1EditProfileLocationFormField_h */
