CellProfiler Pipeline: http://www.cellprofiler.org
Version:1
SVNRevision:10415

LoadImages:[module_num:1|svn_version:\'10372\'|variable_revision_number:7|show_window:False|notes:\x5B\x5D]
    File type to be loaded:individual images
    File selection method:Text-Regular expressions
    Number of images in each group?:3
    Type the text that the excluded images have in common:Do not use
    Analyze all subfolders within the selected folder?:Yes
    Input image file location:Default Input Folder\x7CNone
    Check image sets for missing or duplicate files?:Yes
    Group images by metadata?:No
    Exclude certain files?:No
    Specify metadata fields to group by:
    Image count:3
    Text that these images have in common (case-sensitive):\\w*0000.tif
    Position of this image in each group:1
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:^(?P<Plate>.*)_(?P<Well>\x5BA-P\x5D\x5B0-9\x5D{2})_s(?P<Site>\x5B0-9\x5D)
    Type the regular expression that finds metadata in the subfolder path:.*\x5B\\\\/\x5D(?P<Date>.*)\x5B\\\\/\x5D(?P<Run>.*)$
    Channel count:1
    Group the movie frames?:No
    Grouping method:Interleaved
    Number of channels per group:2
    Name this loaded image:Hoechst
    Channel number:1
    Text that these images have in common (case-sensitive):\\w*0001.tif
    Position of this image in each group:2
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:^(?P<Plate>.*)_(?P<Well>\x5BA-P\x5D\x5B0-9\x5D{2})_s(?P<Site>\x5B0-9\x5D)
    Type the regular expression that finds metadata in the subfolder path:.*\x5B\\\\/\x5D(?P<Date>.*)\x5B\\\\/\x5D(?P<Run>.*)$
    Channel count:1
    Group the movie frames?:No
    Grouping method:Interleaved
    Number of channels per group:2
    Name this loaded image:GFP
    Channel number:1
    Text that these images have in common (case-sensitive):\\w*0002.tif
    Position of this image in each group:3
    Extract metadata from where?:None
    Regular expression that finds metadata in the file name:^(?P<Plate>.*)_(?P<Well>\x5BA-P\x5D\x5B0-9\x5D{2})_s(?P<Site>\x5B0-9\x5D)
    Type the regular expression that finds metadata in the subfolder path:.*\x5B\\\\/\x5D(?P<Date>.*)\x5B\\\\/\x5D(?P<Run>.*)$
    Channel count:1
    Group the movie frames?:No
    Grouping method:Interleaved
    Number of channels per group:3
    Name this loaded image:PI
    Channel number:1

RunImageJ:[module_num:2|svn_version:\'Unknown\'|variable_revision_number:2|show_window:False|notes:\x5B\x5D]
    Command or macro?:Macro
    Command\x3A:None
    Macro\x3A:run("Select All");\nrun("Fit Ellipse");\nrun("Create Mask");
    Options\x3A:
    Set the current image?:Yes
    Current image\x3A:GFP
    Get the current image?:Yes
    Final image\x3A:ImageMask
    Wait for ImageJ?:No
    Run before each group?:Nothing
    Command\x3A:None
    Macro\x3A:run("Invert");
    Options\x3A:
    Run after each group?:Nothing
    Command\x3A:None
    Macro\x3A:run("Invert");
    Options\x3A:
    Save the selected image?:No
    Image name\x3A:ImageJGroupImage

MaskImage:[module_num:3|svn_version:\'10300\'|variable_revision_number:3|show_window:False|notes:\x5B\x5D]
    Select the input image:Hoechst
    Name the output image:MaskBlue
    Use objects or an image as a mask?:Image
    Select object for mask:None
    Select image for mask:ImageMask
    Invert the mask?:Yes

MaskImage:[module_num:4|svn_version:\'10300\'|variable_revision_number:3|show_window:False|notes:\x5B\x5D]
    Select the input image:GFP
    Name the output image:MaskGreen
    Use objects or an image as a mask?:Image
    Select object for mask:None
    Select image for mask:ImageMask
    Invert the mask?:Yes

MaskImage:[module_num:5|svn_version:\'10300\'|variable_revision_number:3|show_window:False|notes:\x5B\x5D]
    Select the input image:PI
    Name the output image:MaskRed
    Use objects or an image as a mask?:Image
    Select object for mask:None
    Select image for mask:ImageMask
    Invert the mask?:Yes

IdentifyPrimaryObjects:[module_num:6|svn_version:\'10372\'|variable_revision_number:7|show_window:False|notes:\x5B\x5D]
    Select the input image:MaskBlue
    Name the primary objects to be identified:Nuclei
    Typical diameter of objects, in pixel units (Min,Max):10,45
    Discard objects outside the diameter range?:Yes
    Try to merge too small objects with nearby larger objects?:No
    Discard objects touching the border of the image?:Yes
    Select the thresholding method:Otsu Global
    Threshold correction factor:1
    Lower and upper bounds on threshold:0.000000,1.000000
    Approximate fraction of image covered by objects?:0.01
    Method to distinguish clumped objects:Intensity
    Method to draw dividing lines between clumped objects:Intensity
    Size of smoothing filter:10
    Suppress local maxima that are closer than this minimum allowed distance:7
    Speed up by using lower-resolution image to find local maxima?:Yes
    Name the outline image:PrimaryOutlines
    Fill holes in identified objects?:Yes
    Automatically calculate size of smoothing filter?:Yes
    Automatically calculate minimum allowed distance between local maxima?:Yes
    Manual threshold:0.0
    Select binary image:None
    Retain outlines of the identified objects?:No
    Automatically calculate the threshold using the Otsu method?:Yes
    Enter Laplacian of Gaussian threshold:0.5
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Automatically calculate the size of objects for the Laplacian of Gaussian filter?:Yes
    Enter LoG filter diameter:5
    Handling of objects if excessive number of objects identified:Continue
    Maximum number of objects:500
    Select the measurement to threshold with:None

IdentifySecondaryObjects:[module_num:7|svn_version:\'10300\'|variable_revision_number:7|show_window:False|notes:\x5B\x5D]
    Select the input objects:Nuclei
    Name the objects to be identified:Cells
    Select the method to identify the secondary objects:Distance - N
    Select the input image:MaskGreen
    Select the thresholding method:Otsu Global
    Threshold correction factor:1
    Lower and upper bounds on threshold:0.000000,1.000000
    Approximate fraction of image covered by objects?:0.01
    Number of pixels by which to expand the primary objects:20
    Regularization factor:0.05
    Name the outline image:SecondaryOutlines
    Manual threshold:0.0
    Select binary image:None
    Retain outlines of the identified secondary objects?:No
    Two-class or three-class thresholding?:Two classes
    Minimize the weighted variance or the entropy?:Weighted variance
    Assign pixels in the middle intensity class to the foreground or the background?:Foreground
    Discard secondary objects that touch the edge of the image?:No
    Discard the associated primary objects?:No
    Name the new primary objects:FilteredNuclei
    Retain outlines of the new primary objects?:No
    Name the new primary object outlines:FilteredNucleiOutlines
    Select the measurement to threshold with:None
    Fill holes in identified objects?:No

MeasureObjectIntensity:[module_num:8|svn_version:\'10300\'|variable_revision_number:3|show_window:False|notes:\x5B\x5D]
    Hidden:1
    Select an image to measure:MaskGreen
    Select objects to measure:Cells

MeasureObjectIntensity:[module_num:9|svn_version:\'10300\'|variable_revision_number:3|show_window:False|notes:\x5B\x5D]
    Hidden:1
    Select an image to measure:MaskRed
    Select objects to measure:Cells

FilterObjects:[module_num:10|svn_version:\'10300\'|variable_revision_number:5|show_window:False|notes:\x5B\x5D]
    Name the output objects:InfectedCells
    Select the object to filter:Cells
    Filter using classifier rules or measurements?:Measurements
    Select the filtering method:Limits
    Select the objects that contain the filtered objects:Cells
    Retain outlines of the identified objects?:No
    Name the outline image:FilteredObjects
    Rules file location:Default Input Folder\x7C.
    Rules file name:rules.txt
    Measurement count:1
    Additional object count:0
    Select the measurement to filter by:Intensity_MeanIntensity_MaskGreen
    Filter using a minimum measurement value?:Yes
    Minimum value:0.0025
    Filter using a maximum measurement value?:No
    Maximum value:1

FilterObjects:[module_num:11|svn_version:\'10300\'|variable_revision_number:5|show_window:False|notes:\x5B\x5D]
    Name the output objects:DeadCells
    Select the object to filter:Cells
    Filter using classifier rules or measurements?:Measurements
    Select the filtering method:Limits
    Select the objects that contain the filtered objects:None
    Retain outlines of the identified objects?:No
    Name the outline image:FilteredObjects
    Rules file location:Default Input Folder\x7CNone
    Rules file name:rules.txt
    Measurement count:1
    Additional object count:0
    Select the measurement to filter by:Intensity_MeanIntensity_MaskRed
    Filter using a minimum measurement value?:Yes
    Minimum value:0.003
    Filter using a maximum measurement value?:No
    Maximum value:
