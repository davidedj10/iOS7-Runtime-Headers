/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3TruthPredicate : ML3Predicate  {
    BOOL _truthValue;
}

+ (id)falsePredicate;
+ (id)truePredicate;

- (id)_predicateString;
- (BOOL)isFalseAlways;
- (BOOL)isTrueAlways;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
