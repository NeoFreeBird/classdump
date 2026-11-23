//
#ifndef PTVUtil_h
#define PTVUtil_h
@import Foundation;

@class NSObject;

@interface PTVUtil : NSObject

/* class methods */
+ (id)RandomStringWithInteger:(unsigned long long)integer;
+ (id)CommaInsertedInteger:(long long)integer;
+ (id)AbbreviatedInteger:(long long)integer;
+ (id)GregorianCalendar;
+ (id)TimeAgoString:(id)string Style:(long long)style IncludeAgoString:(_Bool)string UseSynchronizedNow:(_Bool)now;
+ (id)HoursMinutesSecondsTimeStringFromTimeInterval:(double)interval;
+ (id)HoursMinutesSecondsTimeStringFromTimeInterval:(double)interval ShouldPadMajorUnit:(_Bool)unit;
+ (id)PrettyPrintedJSONDictionary:(id)jsondictionary;
+ (id)HashtagRangeValuesInText:(id)text;
+ (id)URLRangeValuesInText:(id)text;
+ (id)StringWithValidURLsWrappedWithLocalizedDelimiter:(id)delimiter;
+ (id)StringWithValidHashTagsWrappedWithLocalizedDelimiter:(id)delimiter;
+ (id)WrappedInputString:(id)string FromTwitterTextMatches:(id)matches;
+ (id)HashtagsInText:(id)text;
+ (_Bool)AllowInsertionIntoTextView:(id)view ReplacementText:(id)text InRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range CharacterLimit:(unsigned long long)limit;
+ (id)TruncatedStringWithoutSeparatingComposedCharacters:(id)characters WithMaxLength:(unsigned long long)length;
+ (id)SharedAtMentionRegEx;
+ (id)CenteredParagraphStyle;
+ (id)NaturalAlignedAttributedString:(id)string WithFont:(id)font WithColor:(id)color;
+ (id)NaturalAlignedAttributedString:(id)string WithFont:(id)font WithColor:(id)color LineBreakMode:(long long)mode;
+ (id)LocalizedAttributedString:(id)string StandardAttributes:(id)attributes DelimiterAttributes:(id)attributes LinkAttributeNameInjectionPolicy:(unsigned long long)policy;
+ (id)LocalizedAttributedString:(id)string StandardAttributes:(id)attributes DelimiterAttributes:(id)attributes;
+ (id)DelimiterSubstringComponentsFromLocalizedString:(id)string;
+ (id)LocalizedStringByJoiningComponents:(id)components;
+ (id)LocalizedSeparatorBeforeComponentAtIndex:(long long)index componentCount:(long long)count;
+ (id)LocalizedStringForError:(id)error FallbackToGeneric:(_Bool)generic;
+ (void)ShowToastForError:(id)error;
+ (void)ShowToastForError:(id)error PresentGenericIfNeeded:(_Bool)needed;
+ (void)ShowPeriscopeURLDomainWarningIfNeeded:(id)needed;
+ (id)StringForObject:(id)object;
+ (id)NumberForObject:(id)object;
+ (double)CGFloatForObject:(id)object;
+ (id)ArrayForObject:(id)object;
+ (id)ArrayForObject:(id)object GuaranteeClassForObjectsInArray:(Class)array;
+ (id)DictionaryForObject:(id)object;
+ (id)DataForObject:(id)object;
+ (id)DateForObject:(id)object;
+ (id)URLForObject:(id)object;
+ (_Bool)BoolForObject:(id)object;
+ (_Bool)Is64BitDevice;
+ (_Bool)IsIPad;
+ (_Bool)IsJailBrokenPhone;
+ (_Bool)HasWebRTC;
+ (_Bool)isAtLeastA8CPU;
+ (id)circularShapeLayerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame strokeWidth:(double)width strokeColor:(id)color fillColor:(id)color;
+ (id)imageNamed:(id)named;
+ (id)imageNamed:(id)named ignoreThread:(_Bool)thread;
+ (void)VectorImageSetSearchDirectoryURL:(id)url;
+ (void)VectorImageSetFallbackBundle:(id)bundle;
+ (id)vectorImageNamed:(id)named size:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)vectorImageNamed:(id)named size:(struct CGSize { double x0; double x1; })size color:(id)color traitCollection:(id)collection;
+ (id)StatsDictionaryToAddToVideoStats;
+ (id)ParseDate:(id)date;
+ (id)ParseDateFromNumberOfSecondsSince1970:(id)since1970;
+ (id)DateFromUnsafeNTPObject:(id)ntpobject;
+ (id)DateFromNTPValue:(unsigned long long)ntpvalue;
+ (id)RFC3339StringFromDate:(id)date;
+ (id)LocalizedMonthYearDateStringWithNoTimeForDate:(id)date;
+ (id)LocalizedPeriscopeSunsetDate;
+ (id)WebURLHost;
+ (id)ContentURLForBroadcastID:(id)id;
+ (void)PresentSettingsAlertWithTitle:(id)title Message:(id)message PresentingController:(id)controller;
+ (id)CreateSettingsAlertWithTitle:(id)title Message:(id)message ResultBlock:(id /* block */)block;
+ (id)LocalizedTitleForBroadcastReportType:(long long)type;
+ (id)ScribeElementForBroadcastReportType:(long long)type;
+ (id)ActionSheetForReportingBroadcast:(id)broadcast LoggedInUser:(id)user GuestUser:(id)user Timecode:(double)timecode ConfirmationHandler:(id /* block */)handler;
+ (id)CircularMaskForImage:(id)image;
+ (id)ColorizedImage:(id)image WithColor:(id)color ShouldCircle:(_Bool)circle;
+ (id)ColorFromHexString:(id)string;
+ (id)HexStringFromColor:(id)color;
+ (id)KeyWindow;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ApplicationBounds;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DefaultFullScreenFrame;
+ (double)VideoHeight;
+ (_Bool)DeviceHasNotch;
+ (_Bool)IsRTL;
+ (double)FlippedXForRTLIfNeeded:(double)needed WithContainerWidth:(double)width WithElemWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FlippedFrameForRTLIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })needed WithContainerWidth:(double)width;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })RTLFrameFromLTRFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ltrframe WithContainerWidth:(double)width;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })FlippedInsetsForRTLIfNeeded:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })needed;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })MiddlePixelForStretchingWidth:(double)width;
+ (long long)InterfaceOrientationFromCurrentDeviceOrientation;
+ (_Bool)IsInterfaceOrientationLandscape;
+ (void)IncrementIntegerAtKey:(id)key Dictionary:(id)dictionary;
+ (double)FloorDouble:(double)_double ToNearestDecimalPlaces:(int)places;
+ (_Bool)SafelyCompareIfNumber:(id)number IsEqualToNumber:(id)number;
+ (int)SecondsRoundedUpToNearestMinute:(double)minute;
+ (double)BackOffDelayForNumberOfRetries:(long long)retries;
+ (void)EvaluateBackOffRetry:(long long)retry WorkOriginDate:(id)date RetryResponse:(id /* block */)response;
+ (void)EvaluateBackOffRetry:(long long)retry WorkOriginDate:(id)date MaxTimeAcrossRetries:(double)retries RetryResponse:(id /* block */)response;
+ (_Bool)ExponentiallyBackOffWork:(id /* block */)work NumberOfRetriesMade:(long long)made WorkOriginDate:(id)date WorkQueue:(id)queue;
+ (_Bool)ExponentiallyBackOffWork:(id /* block */)work NumberOfRetriesMade:(long long)made WorkOriginDate:(id)date WorkQueue:(id)queue MaxTimeAllowedAcrossAllRetries:(double)retries;
+ (id)DateFormatterResourcePoolMilliseconds;
+ (id)DateFormatterResourcePool;
+ (unsigned long long)ModerationSentenceTypeForBanType:(unsigned long long)type;
+ (_Bool)HasCameraPermissions;
+ (_Bool)HasMicrophonePermissions;
+ (void)AskForCameraPermissionsWithCompletion:(id /* block */)completion;
+ (void)AskForMicrophonePermissionsWithCompletion:(id /* block */)completion;
+ (void)AskForCameraAndMicrophonePermissionsWithCompletion:(id /* block */)completion;
+ (struct CGSize { double x0; double x1; })ImageSizeMedium;
+ (struct CGSize { double x0; double x1; })ImageSizeLarge;

@end

#endif /* PTVUtil_h */
