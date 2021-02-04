/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray;

@interface AVAudioUnitComponentManager : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * tagNames; 
@property (nonatomic,readonly) NSArray * standardLocalizedTagNames; 
+(id)sharedAudioUnitComponentManager;
+(void)privateAllocInitSingleton;
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSArray *)standardLocalizedTagNames;
-(id)componentsMatchingPredicate:(id)arg1 ;
-(id)componentsPassingTest:(/*^block*/id)arg1 ;
-(id)componentsMatchingDescription:(AudioComponentDescription)arg1 ;
-(NSArray *)tagNames;
-(void)localeChanged:(id)arg1 ;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
