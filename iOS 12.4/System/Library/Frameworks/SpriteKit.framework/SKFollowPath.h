/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKFollowPath : SKAction {

	SKCFollowPath* _mycaction;
	CGPathRef _cgPath;

}
+(id)followPath:(CGPathRef)arg1 duration:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4 ;
+(id)followPath:(CGPathRef)arg1 speed:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(double)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)reversedAction;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
