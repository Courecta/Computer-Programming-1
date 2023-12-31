#include "tas.h"
#include "decode.h"
// 0 8 0 0 130 130 0 0 129 130 32 32 131 255
int main()
{
    uint8_t *src = NULL;
    size_t size = 10;
    src = calloc(size, sizeof(uint8_t));
    // printf("%p", src);
    uint8_t button = 0;
    uint64_t start_frame = 0;
    uint64_t end_frame = 0;
    int32_t time = 0;
    scanf("%d", &time);
    for (int i = 0; i < time; i++)
    {
        scanf("%hhu", &button);
        scanf("%zu", &start_frame);
        scanf("%zu", &end_frame);
        button_set_frame(&src, &size, button, start_frame, end_frame);
        scanf("%hhu", &button);
        scanf("%zu", &start_frame);
        scanf("%zu", &end_frame);
        button_unset_frame(src, size, button, start_frame, end_frame);
    }
    extract_fm2_file(src, size);
    free(src);
    return 0;
}