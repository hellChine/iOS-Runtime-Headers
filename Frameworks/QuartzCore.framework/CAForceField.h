/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CAValueFunction, NSString, CALayer;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    NSString *_name;
    CALayer *_layer;
    CAValueFunction *_function;
    BOOL _enabled;
    void *_priv;
}

@property(copy) NSString * name;
@property(getter=isEnabled) BOOL enabled;
@property(retain) CALayer * layer;
@property(retain) CAValueFunction * function;

+ (id)forceField;
+ (id)defaultValueForKey:(id)arg1;

- (void)setFunction:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setName:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)init;
- (void)setLayer:(id)arg1;
- (BOOL)isEnabled;
- (id)layer;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)function;

@end