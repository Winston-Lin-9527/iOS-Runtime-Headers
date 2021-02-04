/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {

	Class _producerClass;
	long long _loadCounter;
	NSArray* _loadedClasses;
	OKProducerContent* _content;

}

@property (nonatomic,retain) OKProducerContent * content;              //@synthesize content=_content - In the implementation block
-(void)_unload;
-(id)contentIdentifier;
-(id)audioURLs;
-(unsigned long long)family;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(void)setupJavascriptContext:(id)arg1 ;
-(id)exportedClassNames;
-(BOOL)hasLoadedClass:(Class)arg1 ;
-(double)minimumContentVersion;
-(id)producerWithPresentation:(id)arg1 ;
-(BOOL)loadRetain;
-(void)unloadRelease;
-(id)guidelinesFromLegacyData:(id)arg1 withMediaURLs:(id)arg2 andMediaLookupDelegate:(id)arg3 ;
-(void)_bundleDidLoad:(id)arg1 ;
-(id)supportedResolutions;
-(BOOL)hasExportedClass:(Class)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isLoaded;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)backgroundColor;
-(id)initWithURL:(id)arg1 ;
-(id)localizedName;
-(OKProducerContent *)content;
-(void)setContent:(OKProducerContent *)arg1 ;
-(BOOL)_load;
@end
